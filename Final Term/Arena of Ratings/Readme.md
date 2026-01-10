**Arena of Ratings – Binary Search Tree (C++)**

This project implements a player matchmaking and leaderboard system using a Binary Search Tree (BST) in C++.
The program processes commands from standard input and performs various operations based on player ratings.

This project was developed for a Data Structures Lab to practice BST operations such as insertion, deletion, searching, and traversal.

**📌 Overview**

Each player is identified by a unique rating.

Players are stored in a BST ordered by rating.

Supports real-time updates and queries.

No STL ordered containers are used.

**🧠 Data Structure Used**

Binary Search Tree (BST)

Pointer-based implementation

Recursive algorithms

Ordering is done only by rating.

**🧾 Player Structure**

Each player node contains:

rating (int) – unique key

name (string)

hp (long long) – health points

left and right child pointers

**⚙️ Supported Commands**

JOIN – Add a new player

LEAVE – Remove an existing player

STATUS – Display player details

DAMAGE – Reduce player health

HEAL – Increase player health

NEXT – Find next higher rated player

PREV – Find previous lower rated player

MATCH – Find closest rating match

RANGE – Print players within a range

RANK – Count players with lower rating

KTH – Find k-th smallest rating

DUEL – Distance between two players

STATS – Display tree statistics

**📊 Tree Statistics (STATS)**

The STATS command prints:

Total number of players

Minimum rating

Maximum rating

Height of the BST

Number of leaf nodes

**✅ Features**

Real-time player matchmaking based on ratings

Efficient insertion, deletion, and search using BST

Handles health updates (damage and heal)

Provides leaderboard queries like next, previous, match, rank, and k-th player
