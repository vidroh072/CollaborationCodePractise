public class practise_4_easy {
    public static void main(String[] args) {
        double[] ticketPrice = {100,500,600};
        boolean[] isPeakRush = {false,true,true};
        for(int i=0;i<ticketPrice.length;i++){
            String category = "";   
            if (isPeakRush[i]){
                ticketPrice[i]*=1.20;
            }
            if (ticketPrice[i]<500){
                category = "Sleeper";
            }else if(ticketPrice[i]>500 && ticketPrice[i]<1500) {
                category = "3AC";
            }else {
                category = "1AC";
            }
            System.out.println("Fare : "+ ticketPrice[i]+ "Seat : "+category);
        }
    }
}