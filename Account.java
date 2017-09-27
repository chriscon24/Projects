/**
 * This class represents a bank account whose current balance is a nonnegative
 * amount in US dollars.
 */
public class Account {

private int balance;
private Account parentAccount;

public static void main (String[]  Args){
    Account kathy = new Account(500, kathy_account);
    Account megan = new Account(100, megan_account);
    megan.withdraw(700);
    System.out.println("Megan's balance: " + megan.balance);
    System.out.println("Kathy's balance: " + kathy.balance);
}

public Account(int init_balance, Account new_account){
    this.init_balance = init_balance;
    this.new_account = new_account;
}

	/** Initialize an account with the given BALANCE. */
	public Account(int balance) {
		this.balance = balance;
	}

	/** Return the number of dollars in the account. */
	public int getBalance() {
		return this.balance;
	}

	/** Deposits AMOUNT into the current account. */
	public void deposit(int amount) {
		if (amount < 0) {
			System.out.println("Cannot deposit negative amount.");
		} else {
			this.balance = this.balance + amount;
		}
	}

	/** Subtract AMOUNT from the account if possible. If subtracting AMOUNT
	 *	would leave a negative balance, print an error message and leave the
	 *	balance unchanged.
	 */
		public bool withdraw(int amount) {
        int difference = amount - this.balance;
    		if (amount < 0) {
    			    System.out.println("Cannot withdraw negative amount.");
              return false;
    		} else if (this.balance < amount) {
    			     System.out.println("Insufficient funds");
               this.parentAccount.withdraw(difference);         //I'm not sure if I did this right.
               this.balance = 0;
               return true;
    		} else if (this.parentAccount.balance  < 0){
               return false;
        } else {
    			     this.balance = this.balance - amount;
               return true;
    		}
	}

	/** Merge account OTHER into this account by removing all money from OTHER
	 *	and depositing it into this account.
     */
    public void merge(Account other) {
        // TODO Put your own code here
        this.balance = this.balance + other.balance;
        other.withdraw(other.balance);
    }
}
