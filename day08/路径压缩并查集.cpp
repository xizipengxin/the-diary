// class UnionFind {
//     vector<int> fa;
//     vector<int> si;
//     vector<int> sta;
// public:
//     int cc;

//     UnionFind(int n):fa(n),cc(n),si(n),sta(n) {
//         ranges::iota(fa,0);
//         fill(si.begin(),si.end(),1);
//     }

//     int find(int x){
//         int sizes=0;
//         while(x!=fa[x]){
//             sta[sizes++]=x;
//             x=fa[x];
//         }
//         while(--sizes>=0){
//             fa[sta[sizes]]=x;
//         }
//         return x;
//     }

//     void merge(int from,int to){
//         int x=find(from),y=find(to);
//         if(x==y){
//             return;
//         }
//         if(si[x]>si[y]){
//             si[x]+=si[y];
//             fa[y]=x;
//         }else{
//             si[x]+=si[y];
//             fa[x]=y;
//         }
//         cc--;

//     }
// };
