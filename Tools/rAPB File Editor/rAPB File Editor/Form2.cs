using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace rAPB_File_Editor
{
    public partial class Form2 : Form
    {
        public Form2()
        {
            InitializeComponent();
        }

        public static string value = null;

        private void Form2_Load(object sender, EventArgs e)
        {
            textBox1.Text = value;
            this.FormClosed += new FormClosedEventHandler(Form2_FormClosed);
        }

        void Form2_FormClosed(object sender, FormClosedEventArgs e)
        {
            Form1.changed = textBox1.Text;
            this.Dispose();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
