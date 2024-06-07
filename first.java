import java.util.*;
class first{
  public static void main(String args[]){
    Scanner sc=new Scanner(System.in);
    int n;
    n=Integer.parseInt(sc.nextLine());
    for(int i=0;i<n;i++){
      String s;
      s=sc.nextLine();
      if(s.equalsIgnoreCase("yes")==true){
        System.out.println("YES");
      }
      else{
        System.out.println("NO");
      }
    }
  }
}