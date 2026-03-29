# ♟️ Chess System (Low Level Design)

## 🚀 Overview

A complete chess system implemented in **C++** using strong **OOP principles** and multiple **design patterns**.
The project focuses on building a scalable and extensible architecture for real-world system design.

---

## 🎯 Features

* Full chess gameplay support
* Move validation for all pieces
* Check, Checkmate, and Stalemate detection
* Turn-based gameplay
* Match system with two players
* In-game chat system
* Score tracking

---

## 🧠 Design Patterns Used

### 🔹 Strategy Pattern

* `ChessRules` → defines rules interface
* `StandardChessRules` → implements actual game rules
* `MatchingStrategy` → matchmaking logic

---

### 🔹 Factory Pattern

* `PieceFactory` → creates different chess pieces dynamically

---

### 🔹 Mediator Pattern

* `Match` → handles communication between players (chat system)

---

### 🔹 Singleton Pattern

* `GameManager` → manages all matches globally

---

## 🏗️ System Design Highlights

* Clean separation of concerns
* Extensible architecture (easy to add new rules / variants)
* Object-oriented modeling of real chess components
* Efficient move validation using piece-specific logic

---

## 🧩 Core Components

* `Board` → manages state of the game
* `Piece` (Abstract) → base class for all pieces
* `King, Queen, Rook, Bishop, Knight, Pawn` → concrete implementations
* `Move` → represents a move
* `Position` → handles board coordinates and notation
* `Match` → controls game flow
* `GameManager` → handles matchmaking

---

## 🛠️ Tech Stack

* **Language:** C++
* **Concepts:** OOP, STL, Design Patterns

---

## ▶️ How to Run

```bash
g++ chessGame.cpp -o chess
./chess
```

---

## 🔮 Future Improvements

* GUI support (Qt / Web UI)
* Online multiplayer support
* AI opponent (Minimax / Alpha-Beta pruning)
* Move history visualization
* PGN export/import

---

## 📌 Author

* Mannu

---

## ⭐ If you like this project

Give it a star ⭐ on GitHub!
