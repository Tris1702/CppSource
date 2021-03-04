import java.util.*;
public class ngaythangnam
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int month = sc.nextInt();
        if (month == 1 || month == 3|| month == 5|| month == 7|| month == 8|| month == 10|| month == 12) System.out.println("31");
        else
            if (month == 2) System.out.println("29");
            else System.out.println("30");
    }
}