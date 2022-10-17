import java.util.*;

public class BFS{
    public static void main(String[] args) {
        int n=7;
        int m=5;

        ArrayList<ArrayList<Integer>> adj=new ArrayList<>();
        for(int i=0;i<=n;i++){
            adj.add(new ArrayList<>());
        }

        //edge 1--2         (1)
        adj.get(1).add(2);
        adj.get(2).add(1);

        //edge 2--3         (2)
        adj.get(2).add(3);
        adj.get(3).add(2);
        
        //edge 2--7         (3)
        adj.get(2).add(7);
        adj.get(7).add(2);

        //edge 3--5         (4)
        adj.get(3).add(5);
        adj.get(5).add(3);

        //edge 5--7         (5)
        adj.get(5).add(7);
        adj.get(7).add(5);

        //Print Graph
        // for(int i=1;i<=n;i++){
        //     for(int j=0;j<adj.get(i).size();j++){
        //         System.out.print(adj.get(i).get(j)+" ");
        //     }
        //     System.out.println();
        // }

        System.out.print(bfsOfGraph(n,adj));
    }


    public static ArrayList<Integer> bfsOfGraph(int V,ArrayList<ArrayList<Integer>> adj){
        ArrayList<Integer> bfs=new ArrayList<>();
        boolean vis[]=new boolean[V+1];

        for(int i=1;i<=V;i++){
            if(vis[i]==false){
                Queue<Integer> q=new LinkedList<>();
                q.add(i);
                vis[i]=true;

                while(!q.isEmpty()){
                    Integer node=q.poll();
                    bfs.add(node);

                    for(Integer it: adj.get(node)){
                        if(vis[it]==false){
                            vis[it]=true;
                            q.add(it);
                        }
                    }
                }
            }
        }
        return bfs;
    }

}