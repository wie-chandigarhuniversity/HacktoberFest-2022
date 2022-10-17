public class MazeWIthObstacles {
    public static void main(String[] args) {
        boolean[][] matrix=new boolean[3][3];
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                matrix[i][j]=true;
            }
        }
        matrix[2][1]=false;

        
    mazeObsSol("", matrix,0,0);
    }

    static void mazeObsSol(String p,boolean[][] mat,int r,int c){
        if(r==mat.length-1 && c==mat[0].length-1){
            System.out.println(p);
        }

        if(mat[r][c]==false){
            return;
        }

        if(r<mat.length-1)mazeObsSol(p+'D',mat,r+1,c);
        if(c<mat[0].length-1) mazeObsSol(p+'R', mat, r, c+1);
    }
}
