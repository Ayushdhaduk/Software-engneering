CREATE DATABASE IF NOT EXISTS product;
USE product;
CREATE TABLE customer
(
customer_id INT PRIMARY KEY,
cust_name VARCHAR(20),
city VARCHAR(20),
grade INT,
salesman_id INT 
);

CREATE TABLE salesman(
salesman_id INT PRIMARY KEY,
name VARCHAR(20),
city VARCHAR(20),
commission FLOAT
);

INSERT INTO customer
(customer_id,cust_name,city,grade,salesman_id)
VALUES
(3002 , "Nick Rimando" , "New York" , 100 , 5001),
(3007 , "Brad Davis", "New York" , 200 , 5001),
(3005 , "Graham Zusi" , "California" , 200 , 5002),
(3008 , "Julian Green" , "London" , 300 , 5002),
(3004 , "Fabian Johnson" , "Paris" , 300 , 5006),
(3009 , "Geoff Cameron" , "Berlin" , 100 , 5003),
(3003 , "Jozy Altidor" , "Moscow" , 200 , 5007),
(3001 , "Brad Guzan" , "London"  ,300   , 5005);


INSERT INTO salesman
(salesman_id,name,city,commission)
VALUES
(5001 , "James Hoog" , "New York" , 0.15),
(5002 , "Nail knite" , "Paris" , 0.13),
(5005 , "Pit Llex" , "London" , 0.11),
(5006, "Mc Lyon" , "Paris" , 0.14),
(5007, "Paul Adam" , "Rome" , 0.13),
(5003 , "Lauson Hen" , "San Jose" , 0.12);


SELECT * FROM customer;
SELECT * FROM salesman;

USE product;

SELECT 
    c.cust_name    AS Customer_Name,
    c.city         AS Customer_City,
    s.name         AS Salesman_Name,
    s.commission   AS Commission
FROM customer AS c
JOIN salesman AS s
    ON c.salesman_id = s.salesman_id;



DROP TABLE customer;