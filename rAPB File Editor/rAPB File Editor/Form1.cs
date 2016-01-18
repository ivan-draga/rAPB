using System;
using System.IO;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Timers;

namespace rAPB_File_Editor
{
    public partial class Form1 : Form
    {
        #region Supports
        /*
         * Current supports (LACKS ONLY SAVING OF FILE CHANGES):
         * Localization file editing
         * Configuration file editing
         * Subtitles editing
        */

        /*
         * Future supports:
         * Unreal Model Viewer launch option for chosen .upk files
         * Decompressor + extractor launch for chosen .upk/.u files 
         * Unreal Explorer launch
         * Shader editor
         * "SDD.bin" file reading (?)
         * Extracting raw audio files from .pck and .bnk files (??)
         * Possible game modding (???)
        */
        #endregion

        public Form1()
        {
            InitializeComponent();
        }

        private ContextMenuStrip listboxContextMenu;
        private ToolStripItem edit;
        private ToolStripItem partof;
        private string line = null;
        private string line2 = null;
        private string property = null;
        private string value = null;
        private int counter = 0;
        private int changes = 0;
        private bool opened = false;

        public static System.Timers.Timer aTimer = new System.Timers.Timer();
        public static string changed = null;

        private void Form1_Load(object sender, EventArgs e)
        {
            listboxContextMenu = new ContextMenuStrip();
            listboxContextMenu.Opening += new CancelEventHandler(listboxContextMenu_Opening);
            listboxContextMenu.ItemClicked += new ToolStripItemClickedEventHandler(OnClickItem);
            listBox2.ContextMenuStrip = listboxContextMenu;
            listBox2.HorizontalScrollbar = true;
            listBox1.HorizontalScrollbar = true;
            aTimer.Elapsed += new ElapsedEventHandler(OnTimedEvent);
            aTimer.Interval = 100;
            aTimer.Enabled = true;
            changed = null;
        }

        private void OnTimedEvent(object source, ElapsedEventArgs e)
        {
            if (changed != null && !listBox2.Items.Contains((string)changed))
            {
                int item = listBox2.SelectedIndex;
                listBox2.Items.RemoveAt(item);
                listBox2.Items.Insert(item, changed);
                changed = null;
                listBox1.SelectedIndex = item;
                listBox2.SelectedIndex = item;
                changes++;
                label4.Text = "Total changes: " + changes;
            }
        }

        private void openToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (!opened)
            {
                OpenFileDialog openFileDialog1 = new OpenFileDialog();
                openFileDialog1.InitialDirectory = "C:\\";
                openFileDialog1.Filter = "Localization files (*.fra, *.FRA, *.ger, *.GER, *.int, *.INT, *.ita, *.ITA, *.rus, *.RUS, *.spa, *.SPA)|*.fra;*.FRA;*.ger;*.GER;*.int;*.INT;*.ita;*.ITA;*.rus;*.RUS;*.spa;*.SPA|Configuration files (*.ini, *.INI)|*.ini;*.INI|Subtitles (*.txt, *.TXT)|*.txt;*.TXT|All files (*.*)|*.*";
                openFileDialog1.FilterIndex = 0;
                openFileDialog1.RestoreDirectory = true;
                if (openFileDialog1.ShowDialog() == DialogResult.OK)
                {
                    try
                    {
                        label3.Text = "File not loaded";
                        label4.Text = "File not loaded";
                        System.IO.StreamReader file = new System.IO.StreamReader(openFileDialog1.FileName);
                        if (openFileDialog1.FileName.Contains(".ini") || openFileDialog1.FileName.Contains(".INI") || openFileDialog1.FileName.Contains(".fra") || openFileDialog1.FileName.Contains(".FRA") || openFileDialog1.FileName.Contains(".ger") || openFileDialog1.FileName.Contains(".GER") || openFileDialog1.FileName.Contains(".int") || openFileDialog1.FileName.Contains(".INT") || openFileDialog1.FileName.Contains(".ita") || openFileDialog1.FileName.Contains(".ITA") || openFileDialog1.FileName.Contains(".rus") || openFileDialog1.FileName.Contains(".RUS") || openFileDialog1.FileName.Contains(".spa") || openFileDialog1.FileName.Contains(".SPA"))
                        {
                            while ((line = file.ReadLine()) != null)
                            {
                                if (line.Length == 0) continue;
                                else if (line.Length != 0)
                                {
                                    if (line[0] == '[') continue; //TODO: add them to list later for file saving (these are actually mentioned [Sections])
                                    if (line[0] == ';') continue; if (line[0] == '#') continue; if (line[0] == '/') continue;
                                    counter++;
                                    line2 = line;
                                    int index = line.IndexOf('=');
                                    if (index > 0) property = line.Substring(0, index);
                                    listBox1.Items.Add(property);
                                    value = line2.Substring(line2.IndexOf('=') + 1);
                                    listBox2.Items.Add(value);
                                }
                            }
                            label3.Text = "Total properties from '" + openFileDialog1.SafeFileName + "' file: " + counter;
                            label4.Text = "Total changes: " + changes;
                            opened = true;
                        }
                        else if (openFileDialog1.FileName.Contains(".txt") || openFileDialog1.FileName.Contains(".TXT"))
                        {
                            int count = 0;
                            while ((line = file.ReadLine()) != null)
                            {
                                count++;
                                if (line.Length == 0)
                                {
                                    count = 0;
                                    continue;
                                }
                                else if (line.Length != 0)
                                {
                                    if (count == 1 && line[0] == '/')
                                    {
                                        //TODO: save the first line in subtitles file
                                        count = 0;
                                        continue;
                                    }
                                    else if (count == 1 && line[0] == '0')
                                    {
                                        listBox1.Items.Add(line);
                                        counter++;
                                        continue;
                                    }
                                    else if (count == 2)
                                    {
                                        listBox2.Items.Add(line);
                                        counter++;
                                        continue;
                                    }
                                }
                            }
                            label3.Text = "Total properties from '" + openFileDialog1.SafeFileName + "' file: " + counter;
                            label4.Text = "Total changes: " + changes;
                            opened = true;
                        }
                        else
                        {
                            MessageBox.Show("Unsupported file extension '" + openFileDialog1.FileName.Substring(openFileDialog1.FileName.IndexOf('.')) + "'", "ERROR", MessageBoxButtons.OK, MessageBoxIcon.Error);
                        }
                        
                    }
                    catch (Exception ex)
                    {
                        MessageBox.Show("An error occured:\n\n" + ex.ToString(), "ERROR", MessageBoxButtons.OK, MessageBoxIcon.Error);
                    }
                }
            }
            else if (opened) MessageBox.Show("You must close/save previous file before opening another one.", "WARNING", MessageBoxButtons.OK, MessageBoxIcon.Warning);
        }

        private void closeToolStripMenuItem_Click(object sender, EventArgs e)
        {
            if (opened)
            {
                if (changes != 0)
                {
                    DialogResult dialogResult = MessageBox.Show("Are you sure you want to close this file? You made " + changes + " changes in total.\n\nAll unsaved changes will be lost.", "CLOSE", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
                    if (dialogResult == DialogResult.Yes)
                    {
                        listBox1.Items.Clear();
                        listBox2.Items.Clear();
                        counter = 0;
                        label3.Text = "File not loaded";
                        label4.Text = "File not loaded";
                        opened = false;
                        listboxContextMenu.Items.Clear();
                        changes = 0;
                    }
                }
                else if (changes == 0)
                {
                    listBox1.Items.Clear();
                    listBox2.Items.Clear();
                    counter = 0;
                    label3.Text = "File not loaded";
                    label4.Text = "File not loaded";
                    opened = false;
                    listboxContextMenu.Items.Clear();
                }
            }
            else if (!opened)
            {
                MessageBox.Show("There is no file to close.", "WARNING", MessageBoxButtons.OK, MessageBoxIcon.Warning);
            }
        }

        private void saveToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Not implemented yet!", "ERROR", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void saveasToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Not implemented yet!", "ERROR", MessageBoxButtons.OK, MessageBoxIcon.Error);
        }

        private void exitToolStripMenuItem_Click(object sender, EventArgs e)
        {
            DialogResult dialogResult = new DialogResult();
            if (!opened) dialogResult = MessageBox.Show("Are you sure you want to exit this application?", "EXIT", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            else if (opened) dialogResult = MessageBox.Show("A file is currently loaded. Are you sure you want to exit this application?\n\nAll unsaved changes will be lost.", "EXIT", MessageBoxButtons.YesNo, MessageBoxIcon.Question);
            if (dialogResult == DialogResult.Yes) Environment.Exit(2);
        }

        private void infoToolStripMenuItem_Click(object sender, EventArgs e)
        {
            MessageBox.Show("Application name:\t\tAPBX File Editor\nApplication version:\t\t1.0\nVersion date:\t\t6th of July 2015\nCreator:\t\t\tfiki574\nContributors:\t\t<none>\nCross-compatible:\t\tYes\nSupported extensions:\t.fra  .ita  .spa  .int  .rus\n\t\t\t.ger  .ini  .usf  .txt", "DETAILS", MessageBoxButtons.OK, MessageBoxIcon.Information);
        }

        private void listBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            listBox2.SelectedIndex = listBox1.SelectedIndex;
        }

        private void listBox2_SelectedIndexChanged(object sender, EventArgs e)
        {
            listBox1.SelectedIndex = listBox2.SelectedIndex;
        }

        private void listboxContextMenu_Opening(object sender, CancelEventArgs e)
        {
            if (listBox1.Items.Count != 0 && listBox2.Items.Count != 0)
            {
                listboxContextMenu.Items.Clear();
                edit = listboxContextMenu.Items.Add("Edit");
                partof = listboxContextMenu.Items.Add("Info");
            }
        }

        private void OnClickItem(object sender, ToolStripItemClickedEventArgs e)
        {
            if (e.ClickedItem == edit)
            {
                Form2 form = new Form2();
                Form2.value = listBox2.SelectedItem.ToString();
                form.ShowDialog();
            }
            else if (e.ClickedItem == partof)
            {
                //TODO: retrieve the specific, saved [Section] to display it correctly (NOTE: look line 82)
                //TODO: if subtitles, then parse the "//" comment from the first line of file
                MessageBox.Show("Selected value is property of:\n\n" + listBox1.SelectedItem.ToString(), "INFO", MessageBoxButtons.OK, MessageBoxIcon.Information);
            }
        }
    }
}
