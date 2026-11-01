
public class practise_1_easy {
    public static void main(String[] args) {
            int validPassenger=0;
            int childrens=0;
            int adults=0;
            int seniors=0;
            double totalRevenue=0;
        int[] ages = {8, -5, 22, 65, 130, 45, 3};
        for (int age : ages) {
            
            if (age<0 || age>120) {
                System.out.println("Age "+age+" Not valid...");
                continue;
            }
            validPassenger++;
            if (age>60) {
                seniors++;
                totalRevenue+=2.50;
            }
            else if (age>18){
                adults++;  
                totalRevenue+=5.00;
            } 
            else childrens++;  

        }
        System.out.println("Daily Revenue & Ridership Summary");
        System.out.println("- Valid Passenger : "+validPassenger);
        System.out.println("- Childrens : "+childrens); 
        System.out.println("- Adults : "+adults); 
        System.out.println("- Seniors : "+seniors);
        System.out.println("- Total Revenue : "+totalRevenue); 
    }
}
