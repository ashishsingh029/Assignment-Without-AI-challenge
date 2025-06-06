import java.util.Scanner;
public class Q20 {
    public static void main(String []args) {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter minimum balance: ");
        double minBal = in.nextDouble();
        try {
            if(minBal < 0) {
                throw new InvalidMinimumBalanceException("Invalid Minimum Balance, must be greater than 0", "Bad Request", 400);
            }
            System.out.print("Enter balance: ");
            double bal = in.nextDouble();
            try {
                if(bal < minBal) {
                    throw new LowBalanceException(" Balance must be greater than minimum balance i.e. " + minBal, "Bad Request", 400);
                }
            } catch (LowBalanceException lowBalanceException) {
                System.out.println(lowBalanceException);
            }
        } catch (InvalidMinimumBalanceException invalidMinimumBalanceException) {
            System.out.println(invalidMinimumBalanceException);
        }
    }
}
class CustomException extends Exception {
    String errorCode;
    CustomException(String message, String errorCode) {
        super(message);
        this.errorCode = errorCode;
    }
}
class InvalidMinimumBalanceException extends CustomException {
    int statusCode;
    InvalidMinimumBalanceException(String message, String errorCode, int statusCode) {
        super(message, errorCode);
        this.statusCode = statusCode;
    }
    @Override
    public String toString() {
        return "InvalidMinimumBalanceException(Custom Exception): " + "\n\tMessage: " + this.getMessage() + "\n\tErrorCode: " + errorCode + "\n\tStatusCode: " + statusCode;
    }
}
class LowBalanceException extends CustomException {
    int statusCode;
    LowBalanceException(String message, String errorCode, int statusCode) {
        super(message, errorCode);
        this.statusCode = statusCode;
    }
    @Override
    public String toString() {
        return "LowBalanceException(Custom Exception): " + "\n\tMessage: " + this.getMessage() + "\n\tErrorCode: " + errorCode + "\n\tStatusCode: " + statusCode;
    }
}