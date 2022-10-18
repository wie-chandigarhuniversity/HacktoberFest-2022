public class FloydsTriangle
{
	public static void main(String[] args) {
	    
		for(int i=1; i<=5; i++){
		    for(int j=1; j<=i; j++)
		    System.out.print(( (((i-1)*(i))/2) + j )+" ");
		    System.out.println();
		}
	}
}
