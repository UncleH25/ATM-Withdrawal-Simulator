# 🏧 ATM Withdrawal Simulator

A C++ console program that simulates a simple ATM withdrawal system. Users can repeatedly withdraw money from their account until they choose to exit, while the program applies transaction fees and validates balance limits.

## 📄 Description

This program allows users to:
* Input an initial account balance
* Repeatedly withdraw money
* View transaction fees based on the amount withdrawn
* Check their remaining balance after each withdrawal
* Exit the simulator at any time by entering `0` or selecting no after a transaction

The program uses a `do...while` loop to allow multiple withdrawals, and applies different fees based on the withdrawal amount.

## 💸 Fee Structure

| **Withdrawal Amount** | **Fee (R)** |
|-------------------|---------|
| Less than R100.00 | 2.00 |
| R100.00 to less than R200.00 | 3.00 |
| R200.00 or more | 5.00 |

## 🧾 Example Output

```
Enter your current balance: R500

ATM Withdrawal Simulator
-------------------------
Current Balance: R500.00
Enter withdrawal amount (or 0 to exit): R120
Withdrawal Successful. New Balance: R380.00
Withdrawal Amount: R120.00
Transaction Fee: R3.00
Total Deducted: R123.00
Remaining Balance: R380.00
Do you want to make another withdrawal? (y/n): y
```

## 🛠️ Technologies Used
* Language: C++
* IDE Used: Visual Studio (But any IDE will work)

## 📦 How to Run
1. Clone The Repo Using CMD:
```
git clone https://github.com/UncleH25/ATM-Withdrawal-Simulator.git
cd atm_withdrawal_simulator
```

3. From a terminal (in the extracted folder), run:
```
g++ -o atm_withdrawal_simulatormain.cpp
./atm-withdrawal-simulator
```

4. Or, if you're using an IDE like Code::Blocks or Visual Studio, open the file and press **Run** or **Build and Run**.

## 📌 License
This project is open source and free to use under the **MIT License**.
