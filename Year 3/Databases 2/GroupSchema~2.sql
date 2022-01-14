/*
DROP TABLE ADVERT;
DROP TABLE BILLING;
DROP TABLE TARGETAUD;
DROP TABLE TV_SEASON;
DROP TABLE TV_PROGRAM;
DROP TABLE AD_AGENCY;
DROP TABLE TIMEREGION;
DROP TABLE TIME_SLOT;

*/

CREATE TABLE ad_agency
(
agencyID char(18) PRIMARY KEY,
billID char(18) REFERENCES billID(billID),
adID varchar(20) REFERENCES advert(adID),
advertClient char(18) NULL ,
clientDesc varchar(60) NULL ,
agencyName char(18) NOT NULL
);
GRANT INSERT, UPDATE, SELECT TO elynch2;

CREATE TABLE advert
(
adID               varchar(20) PRIMARY KEY,
agencyID           char(18)  REFERENCES ad_agency(agencyID),
targetAud          varchar(20)  REFERENCES targetAud(targetAud),
discreption        varchar(60)  NULL ,
Certification      varchar(60)  NULL ,
adDuration           numeric  NULL ,
runCount           numeric  NULL ,
brand              char(18)  NULL ,
Rating             integer  NULL ,
billID             char(18)  NOT NULL ,
targetAud   varchar(20)  NOT NULL
);


CREATE TABLE billing
(
billID             char(18)  PRIMARY KEY,
slotID             char(18)  REFERENCES time_slot(slotID) ,
agencyID           char(18) REFERENCES ad_agency(agencyID),
dueDate            date  NULL ,
payStatus          char(18)  NULL ,
total              float  NULL ,
agencyID           char(18)  NULL ,
totalVAT           float  NULL
);


CREATE TABLE targetAud
(
targetAud          varchar(20)  PRIMARY KEY,
TA_desc               varchar(60)  NULL,
);


CREATE TABLE time_slot
(
slotID             char(18)  PRIMARY KEY,
slotLength             numeric  NULL ,
slotAvail       char(18)  NULL ,
progCode             char(18)  NULL
);


CREATE TABLE timeRegion
(
regionDate         date  PRIMARY KEY,
targetAud          varchar(20)  REFERENCES targetAud(targetAud),
slotID             char(18)  REFERENCES slot(slotID),
regionDesc         char(18)  NULL ,
regionStartTime    timestamp  NULL ,
regionDesc               varchar(80)  NULL ,
dayOfWeek          char(18)  NULL ,
slotRate           float  NULL
);


CREATE TABLE TV_program
(
progCode           char(18)  NOT NULL PRIMARY KEY,
seasonCode         char(18)  REFERENCES TV_Season(seasonCode),
targetAud          varchar(20)  REFERENCES TargetAud(targetAud),
progName           char(18)  NULL ,
progDesc        varchar(60)  NULL ,
startTime          timestamp  NULL,
);


CREATE TABLE TV_Season
(
seasonCode         char(18)  PRIMARY KEY,
regionDate         date  REFERENCES region(regionDate),
progCode           char(18)  REFERENCES TV_program(progcode),
targetAud          varchar(20)  NOT NULL ,
regionDate         date  NOT NULL ,
seasonDesc         char(18)  NULL
);
