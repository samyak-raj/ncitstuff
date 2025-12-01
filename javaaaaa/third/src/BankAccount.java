class InsufficientFundException extends Exception {
    public InsufficientFundException(String msg) {
        super(msg);
    }
}

public class BankAccount {
    double currentBal;
    public BankAccount(double bal) {
        this.currentBal = bal;
    }

    void withdraw(double amount) throws InsufficientFundException {
        if (currentBal < amount) {
            throw new InsufficientFundException("Insufficient Fund");
        } else {
            currentBal -= amount;
            System.out.println("New balance is: " + currentBal);
        }
    }
}

class Test1 {
    public static void main(String[] args) throws InsufficientFundException{
        try {
            BankAccount b = new BankAccount(10000);
            b.withdraw(30000);
        } catch(InsufficientFundException e){
            System.out.println(e.getMessage());
        }
    }
}
