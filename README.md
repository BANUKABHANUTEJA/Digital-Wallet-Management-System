Digital Wallet Management System
================================

Overview
--------

The **Digital Wallet Management System** is a robust software platform designed to facilitate the digital management of financial transactions. It provides users with the capability to transfer and receive funds, monitor account balances, and ensure secure, efficient transactions. This system streamlines financial operations and enhances user convenience.

Features
--------

-   **User Management:** Maintain a comprehensive list of users along with their account balances.
-   **Transaction Handling:** Process fund transfers between users with real-time updates.
-   **Transaction Confirmation:** Offer clear feedback on the success or failure of each transaction.
-   **Balance Sorting:** Display users in ascending order based on their remaining balances after transaction processing.

Input Format
------------

1.  **User Initialization:**

    -   The first line contains an integer `N`, representing the number of users.
    -   The following `N` lines each contain two integers: `userID` and `balance`, where `userID` is the identifier for the user, and `balance` is the initial account balance.
2.  **Transaction Processing:**

    -   The line following the user data contains an integer `T`, representing the number of transactions.
    -   The subsequent `T` lines each contain three integers: `from_userID`, `to_userID`, and `amount`.
        -   `from_userID`: Identifier of the user initiating the transfer.
        -   `to_userID`: Identifier of the user receiving the transfer.
        -   `amount`: The amount of money being transferred.

Output Format
-------------

1.  For each transaction:

    -   Output `"Success"` if the transaction is completed successfully.
    -   Output `"Failure"` if the transaction fails.
2.  After processing all transactions:

    -   Output the list of users sorted in ascending order based on their remaining balance. In case of ties, sort users by their `userID`.

Solution Explanation
--------------------

The solution to the Digital Wallet Management System involves the following steps:

1.  **Initialization:**

    -   Read and store user data, including their `userID` and initial balance, in a dictionary for efficient access and updates.
2.  **Processing Transactions:**

    -   For each transaction, verify that the `from_userID` has sufficient funds to transfer the specified `amount` to the `to_userID`.
    -   Update the balances accordingly and print `"Success"` for successful transactions or `"Failure"` if the transaction cannot be processed due to insufficient funds.
3.  **Sorting and Displaying Results:**

    -   After processing all transactions, sort the users by their remaining balance in ascending order.
    -   In cases where users have the same balance, sort them by their `userID`.
    -   Print the sorted user data showing `userID` and their updated balance.

This approach ensures efficient management and updating of user balances, accurate transaction processing, and clear output of results.
