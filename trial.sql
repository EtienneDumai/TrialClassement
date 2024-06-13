-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Hôte : 127.0.0.1:3306
-- Généré le : jeu. 13 juin 2024 à 15:36
-- Version du serveur : 8.3.0
-- Version de PHP : 8.2.18

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données : `trial`
--

-- --------------------------------------------------------

--
-- Structure de la table `categorie`
--

DROP TABLE IF EXISTS `categorie`;
CREATE TABLE IF NOT EXISTS `categorie` (
  `idPilote` int NOT NULL,
  `idCategorie` int NOT NULL,
  `categorie` varchar(2) NOT NULL,
  `vide` int DEFAULT NULL,
  PRIMARY KEY (`idCategorie`),
  KEY `idPilote` (`idPilote`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Structure de la table `moto`
--

DROP TABLE IF EXISTS `moto`;
CREATE TABLE IF NOT EXISTS `moto` (
  `idMoto` int NOT NULL,
  `Marque` varchar(50) NOT NULL,
  `Cylindree` int NOT NULL,
  PRIMARY KEY (`idMoto`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

-- --------------------------------------------------------

--
-- Structure de la table `pilote`
--

DROP TABLE IF EXISTS `pilote`;
CREATE TABLE IF NOT EXISTS `pilote` (
  `idPilote` int NOT NULL,
  `idMoto` int NOT NULL,
  `idCategorie` int NOT NULL,
  `nom` varchar(50) NOT NULL,
  `prenom` varchar(50) NOT NULL,
  `club` varchar(50) NOT NULL,
  PRIMARY KEY (`idPilote`),
  KEY `idMoto` (`idMoto`),
  KEY `idCategorie` (`idCategorie`)
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_0900_ai_ci;

--
-- Contraintes pour les tables déchargées
--

--
-- Contraintes pour la table `pilote`
--
ALTER TABLE `pilote`
  ADD CONSTRAINT `idCategorie` FOREIGN KEY (`idCategorie`) REFERENCES `categorie` (`idCategorie`) ON DELETE RESTRICT ON UPDATE RESTRICT,
  ADD CONSTRAINT `idMoto` FOREIGN KEY (`idMoto`) REFERENCES `moto` (`idMoto`) ON DELETE CASCADE ON UPDATE CASCADE;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
