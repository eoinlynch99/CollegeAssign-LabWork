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



SELECT * FROM CONTRACT;
SELECT * FROM MANUFACTURER;
SELECT * FROM BUSINESS_ACCOUNT;
SELECT * FROM BUSINESS_ACCOUNT JOIN CONTRACT USING(CONTRACT_NUMBER);


COMMIT;