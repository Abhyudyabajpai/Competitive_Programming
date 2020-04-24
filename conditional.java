THANK YOU!

public class Solution {

static final String WEIRD = "Weird";
static final String NOT_WEIRD = "Not Weird";
static String ans = NOT_WEIRD;

public static Boolean hasRemainder(int number){
   return number%2==1;
}

public static Boolean isNumberOdd(int number){ boolean status = false; if(hasRemainder(number)){status = true;} return status; }

public static String isNumberWeird(int number){ if(isNumberOdd(number)||(number > 5 && number < 21)){ans = WEIRD;} return ans; }

public static void main(String[] args) { Scanner scan = new Scanner(System.in); int number = scan.nextInt(); scan.close();

  System.out.println(isNumberWeird(number));
} 
}
