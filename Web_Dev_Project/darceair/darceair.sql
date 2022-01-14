-- phpMyAdmin SQL Dump
-- version 4.7.7
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Aug 20, 2019 at 09:48 PM
-- Server version: 10.1.30-MariaDB
-- PHP Version: 7.2.2

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `darceair`
--

-- --------------------------------------------------------

--
-- Table structure for table `bookings`
--

CREATE TABLE `bookings` (
  `booking_ref` int(5) NOT NULL,
  `customer_name` text NOT NULL,
  `destination` varchar(50) NOT NULL,
  `plane_time` time NOT NULL,
  `plane_date` date NOT NULL,
  `num_of_tickets` int(2) NOT NULL,
  `total_cost` int(5) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `date`
--

CREATE TABLE `date` (
  `flight_id` int(2) NOT NULL,
  `Title` varchar(50) NOT NULL,
  `date` date NOT NULL,
  `time` time NOT NULL,
  `time1` time NOT NULL,
  `time2` time NOT NULL,
  `time3` time NOT NULL,
  `time4` time NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `date`
--

INSERT INTO `date` (`flight_id`, `Title`, `date`, `time`, `time1`, `time2`, `time3`, `time4`) VALUES
(1, '', '2019-05-22', '07:15:00', '08:15:00', '09:15:00', '10:15:00', '14:20:00'),
(2, '', '2019-07-11', '12:25:00', '13:25:00', '14:25:00', '15:25:00', '18:00:00'),
(3, '', '2019-08-28', '15:45:00', '16:45:00', '17:45:00', '18:45:00', '21:00:00'),
(4, '', '2019-09-04', '06:25:00', '08:25:00', '10:25:00', '13:25:00', '17:25:00'),
(5, '', '2019-10-16', '18:55:00', '19:55:00', '20:55:00', '21:55:00', '23:00:00'),
(6, '', '2019-11-01', '14:10:00', '16:10:00', '18:10:00', '20:20:00', '22:30:00'),
(7, '', '2019-12-22', '06:00:00', '08:00:00', '12:00:00', '16:00:00', '20:00:00'),
(8, '', '2020-01-03', '05:30:00', '07:30:00', '13:30:00', '15:30:00', '21:30:00'),
(9, '', '2019-09-13', '12:00:00', '13:00:00', '14:00:00', '15:00:00', '19:00:00'),
(10, '', '2019-10-24', '08:35:00', '10:35:00', '12:35:00', '14:35:00', '15:55:00');

-- --------------------------------------------------------

--
-- Table structure for table `faves`
--

CREATE TABLE `faves` (
  `ID` int(2) NOT NULL,
  `User` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

-- --------------------------------------------------------

--
-- Table structure for table `flights`
--

CREATE TABLE `flights` (
  `poster` varchar(50) NOT NULL,
  `details` varchar(2000) NOT NULL,
  `length` int(3) NOT NULL,
  `attractions` varchar(200) NOT NULL,
  `flight_id` int(2) NOT NULL,
  `title` varchar(50) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `flights`
--

INSERT INTO `flights` (`poster`, `details`, `length`, `attractions`, `flight_id`, `title`) VALUES
('./images/amsterdam.jpg', 'Amsterdam is one of the greatest small cities in the world. From Amsterdam canals to world-famous Amsterdam museums and historical Amsterdam sights, it is one of the most romantic and beautiful cities in Europe. Canal cruises are a popular way to see the city from the perspective of its canals.', 100, 'Dam Square, Anne Frank House, Johan Cruyff Arena, The Royal Palace and many more.', 1, 'Amsterdam'),
('./images/barcelona.jpg', 'Barcelona is cradled in the North Eastern Mediterranean coast of mainland Spain, about 2 hours drive South from the French Pyrenees. It\'s the capital of Catalunya, a region of Northern Spain that has its own unique culture, traditions and personality.', 150, 'La Sagrada Familia, Camp Nou, Picasso Museum, Las Ramblas street, Barrio Gotico and many more.', 2, 'Barcelona'),
('./images/berlin.jpg', 'The capital and chief urban centre of Germany. The city lies at the heart of the North German Plain, athwart an east-west commercial and geographic axis that helped make it the capital of the kingdom of Prussia and then, from 1871, of a unified Germany.', 135, 'Brandenburg Gate, Reichstag Building, Olympiastadion, Berlin Fernsehturm and many more.', 3, 'Berlin'),
('./images/budapest.jpg', 'The capital of Hungary, and seat of Pest megye (county). The city is the political, administrative, industrial, and commercial centre of Hungary. The site has been continuously settled since prehistoric times and is now the home of about one-fifth of the country\'s population.', 180, 'Buda Castle, Parliament Building, Heroes\' Square, St. Stephen\'s Basilica and many more.', 4, 'Budapest'),
('./images/london.jpg', 'The capital of and largest city in England and the United Kingdom, with the largest municipal population in the European Union. Standing on the River Thames in the south-east of England, at the head of its 50-mile (80 km) estuary leading to the North Sea, London has been a major settlement for two millennia.', 80, 'Big Ben, Tower of London, London Eye, Tower Bridge and many more.', 5, 'London'),
('./images/madrid.jpg', 'The capital city of Spain, located right in the centre of the Iberian Peninsula. Its geographical location grants good communications of the city with other Spanish regions. As capital of the country, it is the seat to the Spanish government institutions and the city of residence of Spanish Royal family.', 135, 'Royal Palace, Plaza Mayor, Museo del Prado, Santiago Bernabeu stadium and many more,', 6, 'Madrid'),
('./images/miami.jpg', 'The seat of Miami-Dade County, and is the cultural, economic and financial center of South Florida. The city covers an area of about 56 square miles (150 km2) between the Everglades to the west and Biscayne Bay to the east.', 555, 'Ocean Drive, Vizcaya Museum & Gardens, Bayfront Park, Virginia Key and many more.', 7, 'Miami'),
('./images/ny.jpg', 'In New York, you\'ll find almost every race and language you can think of under the sun, hence the common moniker, “the melting pot of the world.” The city is made up of 5 boroughs: Manhattan, Brooklyn, Queens, the Bronx and Staten Island, all of which were “grouped” together into a single city in 1898.', 450, 'Statue of Liberty, Central Park, Empire State Building, Times Square and many more.', 8, 'New York'),
('./images/stockholm.jpg', 'The capital and largest city of Sweden. Stockholm is located at the junction of Lake Mälar (Mälaren) and Salt Bay (Saltsjön), an arm of the Baltic Sea, opposite the Gulf of Finland. The city is built upon numerous islands as well as the mainland of Uppland and Södermanland.', 130, 'Gamla stan, Vasa Museum, Royal Palace, Skansen Museum and many more.', 9, 'Stockholm'),
('./images/warsaw.jpg', 'An exciting, colorful, modern, foreigner-friendly and affordable city. It is a destination of many cheap flights and a hub of international companies\' headquarters in central Europe. You will be enchanted by residents of the Polish capital and by Warsaw\'s cultural sites.', 175, 'Royal Castle, Old Town, Lazienki Park, Palace of Culture and Science and many more.', 10, 'Warsaw');

-- --------------------------------------------------------

--
-- Table structure for table `sale`
--

CREATE TABLE `sale` (
  `sale_poster` varchar(100) NOT NULL,
  `sale_details` varchar(5000) NOT NULL,
  `sale_length` int(3) NOT NULL,
  `sale_attractions` varchar(5000) NOT NULL,
  `ID` int(2) NOT NULL,
  `sale_title` varchar(50) NOT NULL,
  `sale_date` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Dumping data for table `sale`
--

INSERT INTO `sale` (`sale_poster`, `sale_details`, `sale_length`, `sale_attractions`, `ID`, `sale_title`, `sale_date`) VALUES
('./images/majorca.jpg', 'The largest island in the Balearic Islands, which are part of Spain and located in the Mediterranean. The native language, as on the rest of the Balearic Islands, is Catalan, which is co-official with Spanish. The capital of the island, Palma, is also the capital of the autonomous community of the Balearic Islands. There are two small islands off the coast of Mallorca: Cabrera (southeast of Palma) and Dragonera (west of Palma).', 165, 'Catedral-Basílica de Santa María de Mallorca, Cap de Formentor, Drach Caves and many more.', 11, 'Majorca', '2019-08-22'),
('./images/manchester.jpg', 'A city and metropolitan borough in Greater Manchester, England, with a population of 545,500 as of 2017 (5th most populous English district). It lies within the United Kingdom\'s second-most populous urban area, with a population of 2.7 million, and third-most populous metropolitan area, with a population of 3.287 million. It is a huge footballing city with both Manchester United and Manchester City sitting at the pinnacle of the sport.', 60, 'Old Trafford, Etihad Stadium, Manchester City Council and many more.', 12, 'Manchester', '2019-08-29'),
('./images/orlando.jpg', 'The City of Orlando is nicknamed \"The City Beautiful,\" and its symbol is the Linton E. Allen Memorial Fountain, commonly referred to as simply the \"Lake Eola fountain\" at Lake Eola Park. Orlando is also known as \"The Theme Park Capital of the World\" and in 2018 its tourist attractions and events drew more than 75 million visitors. The city is also known by the nickname \"O-Town\" because the city\'s name starts with an \"O.\" ', 689, 'Walt Disney World, Universal Orlando Resort, SeaWorld, International Drive and many more.', 13, 'Orlando', '2019-09-05');

-- --------------------------------------------------------

--
-- Table structure for table `users`
--

CREATE TABLE `users` (
  `first_name` text NOT NULL,
  `surname` text NOT NULL,
  `address` varchar(1000) NOT NULL,
  `email` varchar(100) NOT NULL,
  `username` varchar(50) NOT NULL,
  `password` varchar(1000) NOT NULL,
  `date` text NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=latin1;

--
-- Indexes for dumped tables
--

--
-- Indexes for table `date`
--
ALTER TABLE `date`
  ADD PRIMARY KEY (`flight_id`);

--
-- Indexes for table `faves`
--
ALTER TABLE `faves`
  ADD PRIMARY KEY (`ID`);

--
-- Indexes for table `flights`
--
ALTER TABLE `flights`
  ADD PRIMARY KEY (`flight_id`);

--
-- Indexes for table `sale`
--
ALTER TABLE `sale`
  ADD PRIMARY KEY (`ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
