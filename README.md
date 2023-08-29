# Bank-Account-Application
Simple bank account application created with C

This repository contains a basic ATM simulation program written in C. 
The program allows users to perform banking transactions such as withdrawals, deposits, and checking balances. It presents a user-friendly interface in the console window.

How it Works:
1) Initialization and PIN Verification:

- The program starts by initializing the PIN (pin), transaction options (option), entered PIN (enteredPin), transaction counter (count), transaction amount (amount), and a flag for continuing transactions (continueTransaction).
- The pin constant is set to a default value for PIN verification.
- The program prompts the user to enter their PIN and calls the checkPIN function to verify it.

2) Main Menu and Transactions:

- After successful PIN verification, the program presents the main menu to the user.
- Users can select from three transaction options: withdrawal, deposit, or balance inquiry.
- Based on the user's choice, the program calls the respective functions (withdraw, deposit, or displays balance).

3) Withdrawal Function (withdraw):

- Users can withdraw an amount specified by them, as long as it's a multiple of 500.
- The program validates the withdrawal amount and the user's balance.
- If the withdrawal is valid and the balance is sufficient, the amount is subtracted from the balance.

4) Deposit Function (deposit):

- Users can deposit an amount specified by them.
- The program adds the deposited amount to the user's balance.

5) Balance Inquiry:
- Users can check their account balance, which is displayed in the console.

6) Looping Transactions:
- The program allows users to continue performing transactions until they decide to exit.

Additional Information:
- The program uses the Beep function from the Windows API to provide auditory feedback.
- The time function from the time.h library is used to display the current date and time when the program starts.

Please note that this program is a simplified example and is meant for educational purposes. Real-world ATM systems have more advanced features, security measures, and error handling.

Credits:
This project is based on the tutorial by ADV.LEARNING on YouTube. The tutorial can be found in the following link:

ATM Simulation Tutorial by ADV.LEARNING
