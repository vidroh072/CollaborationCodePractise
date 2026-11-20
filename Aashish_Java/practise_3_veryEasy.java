public class practise_3_veryEasy {
    public static void main(String[] args) {
        int[] transactionAmounts = {100,200,300,400};
        for (int amt : transactionAmounts) {
            if (amt>200) {
             System.out.printf("Transaction of ₹%d: Scratch Card Unlocked! 🎉%n",amt);   
            }else{
                System.out.printf("Transaction of ₹%d: Regular Transaction%n",amt);
            }
        }
    }
    
}
