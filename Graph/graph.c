typedef char VertexType
typedef int EdgeType
#define MAXVEX 100
#define INFINITY 65535

typedef struct{
	VertexType vexs[MAXVEX];
	EdgeType arc[MAXVEX][MAXVEX];
	int numVertexes, numEdges;
} MGraph;

void CreateMGraph(MGraph *G){
	int row, col, temp, weight;
	printf("请输入顶点数和边数:");
	scanf("%d,%d", &G->numVertexes, &G->numEdges);
	for(temp=0;temp<G->numVertexes;++temp)
		scanf(&G->vexs[temp]);
	for(row=0;row<G->numVertexes;++row){
		for(col=0;col<G->numVertexes;++col){
			G->arc[row][col] = INFINITY;
		}
	}
	for(temp=0;temp<G->numEdges;++temp){
		printf("输入边(vi,vj)上的下标i，下标j和权w：");
		scanf("%d,%d,%d", &row, &col, &weight);
		G->arc[row][col] = weight;
		G->arc[col][row] = weight;
	}
}