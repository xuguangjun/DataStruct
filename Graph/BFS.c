/*
**Breadth_First_Serach 广度优先遍历
*/

void BFSTraverse(MGraph G){
	Boolean visited[MAXVEX];
	Quene Q;
	int i, j;
	EdgeType data;
	for(i=0;i<G.numVertexes;++i)
		visited[i] = false;
	InitQuene(&Q);
	for(i=0;i<G.numVertexes;++i){
		if(!visited[i]){
			visited[i] = true;
			printf("%c", G.vex[i]);
			EnQuene(&Q,i);
			}
		while(!IsEmpty(Q)){
			DeQuene(&Q,&i);
			for(j=0;j<G.numVertexes;++j){
				if(!visited[j]&&G.arc[i][j]==1){
					visited[j] = true;
					printf("%c", G.vex[j]);
					EnQuene(&Q,j);
				}
			}
		}
	}
}