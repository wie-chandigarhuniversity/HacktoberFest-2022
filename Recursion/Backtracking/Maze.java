import java.util.ArrayList;

public class Maze
{
	public static void main(String[] args) {
	System.out.println(mazeSolDiag("",3,3));
	}

    public static int mazeCount(int r, int c){
        if(r==1 || c==1){
            return 1;
        }
        
        return mazeCount(r-1,c)+mazeCount(r,c-1);
    }

    static void mazeSol(String p,int r,int c){
        if(r==1 && c==1){
            System.out.println(p);
            return;
        }

        if(r!=1) mazeSol(p+"D", r-1, c);
        if(c!=1) mazeSol(p+"R", r, c-1);
    }

    static ArrayList<String> mazeSolArr(String p,int r,int c){
        if(r==1 && c==1){
            ArrayList<String> list=new ArrayList<>();
            list.add(p);
            return list;
        }

        ArrayList<String> list=new ArrayList<>();

        if(r!=1){ list.addAll(mazeSolArr(p+"D", r-1, c));    }
        if(c!=1){ list.addAll(mazeSolArr(p+"R", r, c-1));    }
        
        return list;

    } 


    public static ArrayList<String> mazeSolDiag(String p,int r, int c){
        if(r==1 && c==1){
            ArrayList<String> list=new ArrayList<>();
            list.add(p);
            return list;
        }

        ArrayList<String> list=new ArrayList<>();

        if(r!=1 && c!=1){ list.addAll(mazeSolDiag(p+"C",r-1,c-1));}     
        if(r!=1){ list.addAll(mazeSolDiag(p+"D", r-1, c));    }
        if(c!=1){ list.addAll(mazeSolDiag(p+"R", r, c-1));    }
        
        return list;
    }
}