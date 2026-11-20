import java.util.Scanner;
public class BankingProgram {
        static Scanner sc = new Scanner(System.in);
    public static void main(String[] args) {
        double balance = 20000;
        boolean isRunning = true;
        do {
            System.out.println("===============================");
            System.out.println("WELCOME TO ANISHK BANK ... ");
            System.out.println("1. Show Balance");
            System.out.println("2. Deposit");
            System.out.println("3. Withdraw");
            System.out.println("0. Exit");
            System.out.println("===============================");
            System.out.print("Enter FROM (1-4) : ");
            String userInput = sc.nextLine();

            switch (userInput){
                case "1" -> showBalance(balance);
                case "2" -> balance+=deposit();
                case "3" -> balance-=withdraw(balance);
                case "0" -> isRunning = false;
                default -> System.out.println("- ❌ ENTER VALID INPUT...");
            }

        }while (isRunning);
        sc.close();
    }
    public static void showBalance(double balance){
        System.out.printf("%nACC BALANCE: 💵 %.2fRS%n",balance);
    }
    public static double deposit(){
        System.out.print("\nENTER AMOUNT TO DEPOSIT: ");
        double amount = sc.nextDouble();
        sc.nextLine();
        if (amount < 0){
            System.out.println("- ❌ AMT MUST BE GREATER THAN ZERO..");
            return 0;
        }
        System.out.println("- ✅ AMOUNT SUCCESSFULLY ADDED...");
        return amount;
    }
    public static double withdraw(double balance){
        System.out.print("\nENTER AMOUNT TO WITHDRAW: ");
        double amount = sc.nextDouble();
        sc.nextLine();
        if (amount < 0 || amount >balance){
            System.out.println("- ❌ AMT MUST BE GREATER THAN ZERO & LESS THAN BALANCE..");
            return 0;
        }
        System.out.println("- ✅ AMOUNT SUCCESSFULLY WITHDRAW...");
        balance-=amount;
        return amount;

    }
}
