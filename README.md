# 1st-semester-project
This is my first semester project in c++. I have made Bank Management System.
This C++ program is a simple Bank Management System that allows users to perform various banking operations.

1. **Struct Definition (bank):**
   - This module defines a structure named `bank` that holds information about a bank account, such as account number, account holder's name, account balance, and account type (Current or Saving).

2. **Menu Display (menu):**
   - The `menu` function displays a menu with several options for the user to choose from. These options include creating a new account, depositing money, withdrawing money, checking the account balance, displaying account details, modifying an account, and exiting the program.

3. **Main Function (main):**
   - The `main` function is the entry point of the program and contains the main logic for interacting with the user and performing banking operations.

4. **New Account Creation (Option 1):**
   - If the user selects option 1, they can create a new bank account by providing details like account number, account holder's name, account type, and initial deposit.

5. **Deposit Money (Option 2):**
   - Option 2 allows the user to deposit money into an existing account. The user enters the amount they want to deposit, and it's added to the account balance.

6. **Withdraw Money (Option 3):**
   - Option 3 lets the user withdraw money from an existing account. They enter the amount to withdraw, and it's subtracted from the account balance.

7. **Balance Inquiry (Option 4):**
   - Option 4 allows the user to check the account balance. It displays the account holder's name and their total balance.

8. **Display Account Details (Option 5):**
   - Option 5 displays detailed information about an account, including account number, account holder's name, account type, and balance.

9. **Modify Account (Option 6):**
   - Option 6 allows the user to modify an existing account. They enter the account number, and if it matches an existing account, they can update the account holder's name, account type, and balance.

10. **Exit (Option 7):**
    - Option 7 lets the user exit the program. It displays a thank-you message and ends the program.

11. **Error Handling:**
    - If the user enters an invalid option, the program informs them that it's an invalid choice.

12. **Loop and Termination:**
    - The program runs in a loop, allowing the user to perform multiple operations until they choose to exit (Option 7).

13. **System Pause and Return:**
    - The program includes a `system("pause")` to pause execution and waits for user input before closing.

This Bank Management System provides a basic framework for managing bank accounts and demonstrating simple banking operations.
