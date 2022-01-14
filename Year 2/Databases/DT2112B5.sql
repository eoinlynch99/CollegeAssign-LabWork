DROP TABLE CONTRACT;
CREATE TABLE CONTRACT(
new_contract number(10)not null, 
phone_purchased number(10)not null,
existing_cotract number(2)not null,
contract_number number(10)not null primary key,
phone_number number(10)
);
DROP TABLE MANUFACTURER;
CREATE TABLE MANUFACTURER(
brand varchar(10)not  null,
phone_name varchar(10)not null,
serial_number number(10) not null PRIMARY KEY
);
DROP TABLE BUSINESS_ACCOUNT;
CREATE TABLE BUSINESS_ACCOUNT(
contract_number NUMBER(10),
FOREIGN KEY (contract_number) REFERENCES CONTRACT(contract_number),
customer_name varchar(20)not null,
customer_address varchar(50)not null,
customer_email varchar(20)not null,
customer_finacialDetails varchar(50)not null,
sim_type varchar(10)not null
);
DROP TABLE PERSONAL_ACCOUNT;
CREATE TABLE PERSONAL_ACCOUNT(
contract_number number(10),
FOREIGN KEY (contract_number) REFERENCES CONTRACT(contract_number),
customer_name varchar(20)not null,
customer_address varchar(50)not null,
customer_email varchar(20)not null,
customer_finacialDetails varchar(50)not null,
sim_type varchar(10)not null
);
DROP TABLE USERUSAGE;
CREATE TABLE USERUSAGE(
contract_number number(10),
FOREIGN KEY (contract_number) REFERENCES CONTRACT(contract_number),
myphone_message number(10)not null,
other_message number(10)not null,
price number(10)not null,
overseas_call number(10)not null,
local_call number(10)not null,
duration_ofCall number(10)not null
);
DROP TABLE BILLING2;
CREATE TABLE BILLING2(
store_id number(10),
FOREIGN KEY (store_id) REFERENCES STORES(store_id),
contract_number number(10),
FOREIGN KEY (contract_number) REFERENCES CONTRACT(contract_number),
Phone_type varchar(10)not null,
Phone_cost number(10)not null,
Billing_time number(5,5)not null,
Billing_date date not null,
Account_price number(10)not null,
serial_number number(10),
FOREIGN KEY (serial_number) REFERENCES MANUFACTURER(serial_number)
);
DROP TABLE STORES;
CREATE TABLE STORES
(
STORE_ID NUMBER(5)PRIMARY KEY,
STORE_NAME VARCHAR(10)NOT NULL UNIQUE,
STORE_ADDRESS VARCHAR(20)NOT NULL UNIQUE,
STORE_PHONE_NUMBER NUMBER(10)NOT NULL UNIQUE
);

INSERT INTO CONTRACT VALUES(
1,
1,
0,
123456,
0867353604
);
INSERT INTO CONTRACT VALUES(
1,
1,
0,
123459,
0867353679
);
INSERT INTO CONTRACT VALUES(
1,
1,
0,
1234589,
0867312345
);
INSERT INTO CONTRACT VALUES(
1,
1,
0,
543459,
0836353679
);
INSERT INTO CONTRACT VALUES(
1,
2,
0,
5434697,
0836354321
);
INSERT INTO CONTRACT VALUES(
1,
2,
0,
5194319,
0896957321
);
INSERT INTO CONTRACT VALUES(
1,
2,
0,
3997481,
0897757321
);
INSERT INTO MANUFACTURER VALUES(
'APPLE',
'IPHONE7',
15348845
);
INSERT INTO MANUFACTURER VALUES(
'APPLE',
'IPHONE6S',
1645687
);
INSERT INTO MANUFACTURER VALUES(
'APPLE',
'IPHONE8',
34787684
);
INSERT INTO MANUFACTURER VALUES(
'APPLE',
'IPHONE x',
417684684
);
INSERT INTO MANUFACTURER VALUES(
'SAMSUNG',
'S5',
3547864
);
INSERT INTO MANUFACTURER VALUES(
'SAMSUNG',
'S6',
36748769
);
INSERT INTO MANUFACTURER VALUES(
'SAMSUNG',
'S7',
534786
);
INSERT INTO MANUFACTURER VALUES(
'SAMSUNG',
'S8',
2463798
);
INSERT INTO MANUFACTURER VALUES(
'SAMSUNG',
'S9',
134684
);
INSERT INTO BUSINESS_ACCOUNT VALUES(
123456,
'JEAN',
'DUBLIN',
'JEAN@YAHOO.COM',
'MANAGER',
'NANO');

INSERT INTO BILLING2 VALUES(
16365478,
123456,
'APPLE',
800,
12,
'20-MAR-18',
500,
1234978
);

INSERT INTO USERUSAGE VALUES(
123459,
08361957,
12357232,
14135131,
15523662,
23623462,
35326435
);

INSERT INTO USERUSAGE VALUES(
1234589,
32542345,
47646145,
37435723,
23463621,
14633472,
23572723
);

INSERT INTO USERUSAGE VALUES(
5434697,
64326236,
98823632,
92992343,
15344632,
13746464,
78568568
);

INSERT INTO USERUSAGE VALUES(
543459,
24572372,
44834854,
74745722,
45725727,
25437275,
25223727
);

INSERT INTO USERUSAGE VALUES(
5194319,
76591752,
12359159,
12351891,
23185018,
09179130,
08569208
);

INSERT INTO USERUSAGE VALUES(
3997481,
01846194,
17468191,
56913471,
49174811,
76589121,
19571911
);

INSERT INTO USERUSAGE VALUES(
7480,
12395981,
67219521,
57757519,
12351515,
97568912,
86731923
);


INSERT INTO USERUSAGE VALUES(
5000319,
96793571,
01935133,
05871233,
65718322,
09135712,
82571819
);

INSERT INTO STORES VALUES(
45678,
'JD SPORTS',
'DUBLIN',
08653592
);

INSERT INTO STORES VALUES(
21355,
'NOWHERE',
'CORK',
08739487
);

INSERT INTO STORES VALUES(
26715,
'LIFESTYLE',
'TALLAGHT',
08987612
);

INSERT INTO STORES VALUES(
43985,
'PENNYS',
'NUTGROVE',
08345892
);

INSERT INTO STORES VALUES(
98563,
'DUNNES',
'DERRY',
08635389
);

INSERT INTO STORES VALUES(
98563,
'DUNNES',
'DERRY',
08635389
);

INSERT INTO STORES VALUES(
98563,
'SUBWAY',
'MARYST',
0831234
);

INSERT INTO STORES VALUES(
76583,
'BOOJUM',
'KERRY',
0837812
);

INSERT INTO STORES VALUES(
78123,
'STARPIZ',
'TYRONE',
0897654
);

INSERT INTO STORES VALUES(
21765,
'VERSACE',
'KILDARE',
0856312
);

SELECT * FROM CONTRACT;
SELECT * FROM MANUFACTURER;
SELECT * FROM BUSINESS_ACCOUNT;
SELECT * FROM BUSINESS_ACCOUNT JOIN CONTRACT USING(CONTRACT_NUMBER);
SELECT * FROM USERUSAGE;
SELECT * FROM STORES;

GRANT SELECT, UPDATE, DELETE, INSERT ON STORES TO ELYNCH;
--COMMIT;