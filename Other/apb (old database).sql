DROP TABLE IF EXISTS `accounts`;
CREATE TABLE `accounts`(
  `id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT, 
  `email` varchar(50) NOT NULL DEFAULT '', 
  `username` varchar(32) NOT NULL DEFAULT '', 
  `verifier` varchar(128) DEFAULT '', 
  `salt` varchar(20) DEFAULT '', 
  `points` int(11) unsigned, 
  `admin` int(1) unsigned zerofill NOT NULL DEFAULT '0', 
  `banned` tinyint(1) NOT NULL DEFAULT '0',
  `extrn_login` tinyint(1) NOT NULL DEFAULT '0',
  `token` varchar(8), 
  `canhost` tinyint(1) NOT NULL DEFAULT '0',
  UNIQUE KEY `id` (`id`), UNIQUE KEY `username` (`username`), 
  UNIQUE KEY `email` (`email`)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;


DROP TABLE IF EXISTS `characters`;
CREATE TABLE IF NOT EXISTS `characters`(
  `id` int(10) unsigned zerofill NOT NULL AUTO_INCREMENT, 
  `account` int(10) unsigned zerofill NOT NULL, 
  `slot` tinyint(3) unsigned zerofill NOT NULL DEFAULT '001', 
  `name` varchar(32) NOT NULL, 
  `faction` tinyint(1) NOT NULL, 
  `gender` tinyint(1) NOT NULL, 
  `rank` int(3) unsigned, 
  `money` int(11) unsigned, 
  `threat` tinyint(2) NOT NULL, 
  `playtime` int(11) unsigned, 
  `clan` varchar(60) NOT NULL, 
  `version` int(11) NOT NULL, 
  `appearence` text NOT NULL, 
  `custom` text NOT NULL, 
  `world` int(10) unsigned zerofill NOT NULL, 
  PRIMARY KEY (`id`,`account`), 
  UNIQUE KEY `characterId` (`id`), 
  UNIQUE KEY `slot` (`account`,`slot`), 
  UNIQUE KEY `characterName` (`name`)
) ENGINE=InnoDB AUTO_INCREMENT=6 DEFAULT CHARSET=utf8;

DROP TABLE IF EXISTS `clientstatus`;
CREATE TABLE IF NOT EXISTS `clientstatus` (
  `name` varchar(32) NOT NULL, 
  `districtID` tinyint(1), 
  `districtType` tinyint(1), 
  `online` tinyint(1), 
  `lfg` tinyint(1), 
  `grpstatus` tinyint(1) , 
  `grppub` tinyint(1), 
  `grpinv` tinyint(1)
) ENGINE=InnoDB AUTO_INCREMENT=2 DEFAULT CHARSET=utf8;