
CREATE DATABASE NobelDB;
USE NobelDB;

CREATE TABLE Nobel_win (
    year INT,
    subject VARCHAR(100),
    winner VARCHAR(200),
    country VARCHAR(100),
    category VARCHAR(100)
);


INSERT INTO Nobel_win (year, subject, winner, country, category) VALUES
(1965, 'Physics', 'Sin-Itiro Tomonaga', 'Japan', 'Scientist'),
(1965, 'Chemistry', 'Robert Burns Woodward', 'USA', 'Scientist'),
(1967, 'Peace', 'Martin Luther King Jr.', 'USA', 'Activist'),
(1968, 'Chemistry', 'Luis Alvarez', 'USA', 'Scientist'),
(1969, 'Economics', 'Ragnar Frisch', 'Norway', 'Economist'),
(1969, 'Economics', 'Jan Tinbergen', 'Netherlands', 'Economist'),
(1970, 'Physics', 'Louis Neel', 'France', 'Scientist'),
(1970, 'Chemistry', 'Luis Federico Leloir', 'Argentina', 'Scientist'),
(1970, 'Economics', 'Paul Samuelson', 'USA', 'Economist'),
(1970, 'Literature', 'Aleksandr Solzhenitsyn', 'Russia', 'Writer'),
(1971, 'Peace', 'Willy Brandt', 'Germany', 'Politician'),
(1972, 'Physics', 'John Bardeen', 'USA', 'Scientist'),
(1972, 'Economics', 'Kenneth Arrow', 'USA', 'Economist'),
(1973, 'Peace', 'Henry Kissinger', 'USA', 'Politician'),
(1973, 'Peace', 'Le Duc Tho', 'Vietnam', 'Politician'),
(1974, 'Literature', 'Eyvind Johnson', 'Sweden', 'Writer'),
(1974, 'Literature', 'Harry Martinson', 'Sweden', 'Writer'),
(1975, 'Chemistry', 'John Cornforth', 'UK', 'Scientist'),
(1975, 'Peace', 'Andrei Sakharov', 'Russia', 'Activist'),
(1975, 'Economics', 'Leonid Kantorovich', 'Russia', 'Economist'),
(1975, 'Economics', 'Tjalling Koopmans', 'Netherlands', 'Economist');

-- Write sql query to find the nobel prize winners of the year 1970. Return year,subject and winner

SELECT year, subject, winner
FROM Nobel_win
WHERE year = 1970;

-- Write sql query to find the nobel prize winners in chemistry between the years 1965
-- and 1975. Begin and end values are includedReturn year, subject, winner and country


SELECT year, subject, winner, country
FROM Nobel_win
WHERE subject = 'Chemistry'
  AND year BETWEEN 1965 AND 1975;

-- Write sql query to retrieve the details of the winners whose first name matches with
-- the string ‘Louis’. Return year,subject,winner,country


SELECT year, subject, winner, country
FROM Nobel_win
WHERE winner LIKE 'Louis%';


-- Write sql query to find Nobel prize winners for the subject that does not begin with
-- the letter ‘P’. Order the result by year, descending and winner in ascending

SELECT year, subject, winner
FROM Nobel_win
WHERE subject NOT LIKE 'P%'
ORDER BY year DESC, winner ASC;

-- Write sql query to find the details of 1970 Nobel prize winners. Order the result by
-- subject, ascending except for ‘Chemistry’ and ‘Economics’ which will come at the
-- end of the result set. Return year, subject, winner , country and category


SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE year = 1970
ORDER BY 
    CASE 
        WHEN subject IN ('Chemistry', 'Economics') THEN 2 
        ELSE 1 
    END,
    subject ASC;
