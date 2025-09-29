
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


SELECT year, subject, winner
FROM Nobel_win
WHERE year = 1970;


SELECT year, subject, winner, country
FROM Nobel_win
WHERE subject = 'Chemistry'
  AND year BETWEEN 1965 AND 1975;

SELECT year, subject, winner, country
FROM Nobel_win
WHERE winner LIKE 'Louis%';

SELECT year, subject, winner
FROM Nobel_win
WHERE subject NOT LIKE 'P%'
ORDER BY year DESC, winner ASC;


SELECT year, subject, winner, country, category
FROM Nobel_win
WHERE year = 1970
ORDER BY 
    CASE 
        WHEN subject IN ('Chemistry', 'Economics') THEN 2 
        ELSE 1 
    END,
    subject ASC;
