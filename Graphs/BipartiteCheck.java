import java.util.ArrayList;
import java.util.Arrays;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class BipartiteCheck {
    public static void main(String[] args) {
        int n=8;
        int m=8;

        ArrayList<ArrayList<Integer>> adj=new ArrayList<>();
        for(int i=0;i<=n;i++){
            adj.add(new ArrayList<>());
        }


        Scanner sc=new Scanner(System.in);
       
        for(int i=0;i<m;i++){
            int u,v;
            u=sc.nextInt();
            v=sc.nextInt();
            addEdge(adj, u, v);
        }
        sc.close();

        System.out.print(checkBipartite(adj,n));
    }

    public static void addEdge(ArrayList<ArrayList<Integer>> adj,int u,int v){
        adj.get(u).add(v);
        adj.get(v).add(u);
    }

    static boolean bfsCheck(ArrayList<ArrayList<Integer>> adj,int node,int color[]){
        Queue<Integer> q=new LinkedList<>();     
        q.add(node);
        color[node]=1;

        while(!q.isEmpty()){
            Integer nde=q.poll();
            for(Integer it:adj.get(nde)){
                if(color[it]==-1){
                    color[it]=1-color[nde];
                    q.add(it);
                }
                else if(color[it]==color[nde]){
                    return false;
                }
            }
        }
    
    return true;}

    static boolean checkBipartite(ArrayList<ArrayList<Integer>> adj,int n){
        int color[]=new int[n+1];
        for(int i=0;i<=n;i++){color[i]=-1;}
        for(int i=0;i<=n;i++){
            if(color[i]==-1){
                if(!bfsCheck(adj, i, color)){
                    return false;
                }
            }
        }
    return true;
    }
}
