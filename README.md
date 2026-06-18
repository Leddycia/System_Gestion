# System_Gestion — Projet Scolaire

> **Projet réalisé dans le cadre d'un cours de programmation.**

---

## Description

**System_Gestion** est une application de bureau développée en **C++** avec le framework **Qt 5.12**, dans le cadre d'un projet scolaire. Elle simule un **système de gestion pour une entreprise de services** (du type "multiservice" ou papeterie/reprographie), permettant de gérer les employés, les produits, les impressions, les photocopies, et bien plus encore.

Le projet intègre également un **chatbot local basé sur l'IA** (via Ollama / LLaMA 3.1) pour assister l'utilisateur depuis l'interface.

---

## Objectifs pédagogiques

- Apprendre à développer des applications de bureau avec **Qt et C++**
- Mettre en pratique la **programmation orientée objet (POO)**
- Intégrer une **base de données MySQL** dans une application C++
- Concevoir des interfaces graphiques avec **Qt Designer (fichiers `.ui`)**
- Gérer l'impression de factures avec **QPrinter**
- Explorer l'intégration d'un **modèle d'IA local** (Ollama)

---

## Technologies utilisées

| Technologie | Version / Détail |
|---|---|
| Langage | C++11 |
| Framework UI | Qt 5.12.12 |
| Compilateur | MinGW 64-bit |
| Base de données | MySQL (via QMYSQL driver) |
| IA / Chatbot | Ollama (LLaMA 3.1 en local) |
| Impression | Qt Print Support (QPrinter) |
| Réseau | Qt Network (QNetworkAccessManager) |

---

## Fonctionnalités

### Gestion des employés
- Ajouter un nouvel employé (nom, prénom, poste, email, NIF)
- Modifier / Supprimer un employé existant
- Lister tous les employés enregistrés

### Gestion des produits
- Ajouter de nouveaux produits (informations et photos)
- Ajouter des articles en stock
- Supprimer des produits (par info ou par photo)
- Consulter la liste des produits

### Impressions
- Enregistrer une commande d'impression (nb pages, copies, couleur, recto/verso)
- Calcul automatique du prix total en **Gourdes (HTG)**
- Génération et impression d'une **facture PDF**
- Consulter la liste des impressions

### Photocopies
- Enregistrer une commande de photocopie
- Calcul automatique du prix (Noir : 10 GDS/page, Couleur : 25 GDS/page)
- Génération d'une **facture de photocopie**
- Consulter la liste des photocopies

### Chatbot IA intégré
- Fenêtre flottante accessible depuis l'interface principale
- Connexion à un serveur **Ollama local** (port `11434`)
- Modèle utilisé : **LLaMA 3.1**
- Réponses générées en temps réel (streaming JSON)

### Authentification
- Page de connexion sécurisée (nom d'utilisateur + mot de passe)
- Accès unique : compte `Admin`

### Autres modules
- Page d'accueil (tableau de bord)
- Manuel d'aide intégré
- Page "Contactez-nous"
- Déconnexion / Quitter l'application

---

## Structure de la base de données

La base de données s'appelle **`system_gestion`** et tourne sur MySQL en local (`localhost`, utilisateur `root`).

Tables utilisées (déduites du code source) :

| Table | Contenu |
|---|---|
| `enregistrer_employes` | Employés (nom, prénom, poste, email, nif) |
| `impression` | Commandes d'impression |
| `photocopies` | Commandes de photocopie |

---

## Prérequis et Installation

### 1. Logiciels requis
- [Qt 5.12.12](https://www.qt.io/offline-installers) avec MinGW 64-bit
- [MySQL Server](https://dev.mysql.com/downloads/) (ou XAMPP / WAMP)
- [Ollama](https://ollama.com/) (optionnel — pour le chatbot IA)

### 2. Configurer la base de données
```sql
CREATE DATABASE system_gestion;
USE system_gestion;

CREATE TABLE enregistrer_employes (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nom VARCHAR(100),
    prenom VARCHAR(100),
    poste VARCHAR(100),
    email VARCHAR(150),
    nif INT
);

CREATE TABLE impression (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nombre_pages INT,
    nombre_impression INT,
    choix_couleur VARCHAR(50),
    recto_verso VARCHAR(50),
    prix_total DOUBLE
);

CREATE TABLE photocopies (
    id INT AUTO_INCREMENT PRIMARY KEY,
    nombre_pages INT,
    nombre_copies INT,
    choix_couleur VARCHAR(50),
    recto_verso VARCHAR(50),
    prix_total DOUBLE
);
```

### 3. Lancer l'application
1. Ouvrir `System_Gestion.pro` dans **Qt Creator**
2. Configurer le kit **Desktop Qt 5.12.12 MinGW 64-bit**
3. S'assurer que `libmysql.dll` et `qsqlmysql.dll` sont dans le dossier du projet
4. Compiler et exécuter (**Ctrl+R**)

### 4. Lancer le chatbot IA (optionnel)
```bash
ollama run llama3.1
```
Le serveur Ollama doit écouter sur le port `11434`.

---

## Identifiants de connexion

| Champ | Valeur |
|---|---|
| Utilisateur | `Admin` |
| Mot de passe | `Admin` |

---

## Structure du projet

```
System_Gestion/
├── main.cpp                    # Point d'entrée, connexion DB
├── mainwindow.cpp/.h/.ui       # Fenêtre principale (navigation)
├── login.cpp/.h/.ui            # Page de connexion
├── accueil.*                   # Page d'accueil
├── ajouter_employer.*          # Ajout d'employé
├── enlever_employer.*          # Suppression d'employé
├── liste_emp.*                 # Liste des employés
├── ajouter_nouveau_produit.*   # Ajout de produit (infos)
├── ajouter_article_en_stock.*  # Ajout de produit (stock)
├── enlever_prod_info.*         # Suppression produit (info)
├── enlever_prod_photo.*        # Suppression produit (photo)
├── liste_infos.*               # Liste produits (infos)
├── liste_photo.*               # Liste produits (photos)
├── graphie.*                   # Module Impressions
├── copie.*                     # Module Photocopies
├── liste_impres.*              # Liste des impressions
├── liste_photoco.*             # Liste des photocopies
├── chatbotwidget.*             # Chatbot IA flottant
├── chatbubble.*                # Bulle de chat
├── manuel.*                    # Manuel d'aide
├── contactez_nous.*            # Page contact
├── icons/                      # Icônes de l'application
├── images/                     # Images (logo, etc.)
└── System_Gestion.pro          # Fichier de projet Qt
```

---

## Informations scolaires

> Ce projet a été réalisé à titre **éducatif** dans le cadre d'un cours de programmation orientée objet avec C++ et Qt.
> Il ne s'agit pas d'un logiciel de production.

---

*Développé en C++ / Qt 5*
