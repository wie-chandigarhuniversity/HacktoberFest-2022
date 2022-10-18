
public class FindAllPaths {
    public static void main(String[] args) {
        boolean[][] matrix=new boolean[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matrix[i][j]=true;
            }
        }
        // matrix[2][1]=false;

        
    mazeObsSolAll("", matrix,0,0);
    }

    static void mazeObsSolAll(String p,boolean[][] mat,int r,int c){
        if(r==mat.length-1 && c==mat[0].length-1){
            System.out.println(p);
            return;
        }

        // boolean actual=mat[r][c];

        if(mat[r][c]==false){
            return;
        }
        
        mat[r][c]=false;
        

        if(r<mat.length-1)mazeObsSolAll(p+'D',mat,r+1,c);
        if(c<mat[0].length-1) mazeObsSolAll(p+'R', mat, r, c+1);
        if(r>0) mazeObsSolAll(p+'U', mat, r-1, c);
        if(c>0) mazeObsSolAll(p+'L', mat, r, c-1);


        //Backtracking i.e. revert all the changes you made
        //before the function gets removed, also remove the changes you made
        mat[r][c]=true;
    }
}
