🧮💥 PyCalc — A Tiny Interactive Calculator in Python!

Say hello to PyCalc, your friendly command-line calculator with a built-in memory 📜
Quick calculations, persistent history, and a clean interactive loop — all in under 30 lines of Python! ⚡🐍

🚀 What It Does

Type any simple arithmetic expression and get instant results! ⚙️
PyCalc remembers everything you enter so you can check your command history anytime 🧠

🧠 Supported Features

✅ Basic arithmetic: +, -, *, /, and ** (exponentiation)
✅ Command history: View all past inputs with hist
✅ Exit anytime: Just type exit
✅ Error handling: Gracefully handles invalid input
✅ Simple and lightweight: No imports required! 💡

💡 Example Usage
Enter command: 5 + 7
12.0

Enter command: 3 ** 2
9.0

Enter command: hist
['5 + 7', '3 ** 2']

Enter command: exit


Boom 💥 — it’s that easy!

🧩 How It Works

🔹 The program loops forever, asking for user input (input())
🔹 Each command is stored in a hist list 🗂️
🔹 Input is split into tokens and evaluated step by step 🧮
🔹 It prints results — or politely says "Invalid Input" if something’s off 😇

⚙️ Supported Operations
Operation	Example	Result
➕ Addition	4 + 2	6.0
➖ Subtraction	9 - 3	6.0
✖️ Multiplication	3 * 5	15.0
➗ Division	10 / 2	5.0
🔼 Exponent	2 ** 3	8.0
📜 Commands
Command	Description
hist	View history of all entered expressions
exit	Quit the calculator
🧠 Possible Upgrades

💡 Add a redo <n> command to re-run a past calculation
💡 Store history in a file so it persists between sessions
💡 Add parentheses parsing for complex expressions
💡 Pretty-print history with numbering

🧰 How to Run

1️⃣ Clone the repo:

git clone https://github.com/yourusername/pycalc.git
cd pycalc


2️⃣ Run the calculator:

python pycalc.py


3️⃣ Start calculating! 🧮⚡

❤️ Why You’ll Love It

✨ Instant feedback — no need for GUIs
🧩 Great beginner project to learn loops, lists, and parsing
💬 Perfect foundation for a REPL-style (Read-Eval-Print Loop) app
💻 All in pure Python — no dependencies, no fuss!

👨‍💻 Author

Made with 💙 and a curious mind by [GilbertZennerDev]
“Because sometimes, you just want to do math… the hacker way.” 😎
