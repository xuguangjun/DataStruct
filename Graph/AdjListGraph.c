/*
**�ڽӱ�ʵ��ͼ�洢
*/

typedef char VertexType
typedef int EdgeType

#define MAXVEX 100

typedef struct EdgeNode{
	int adjvex;
	EdgeType weight;
	struct EdgeNode *next;
}EdgeNode;

typedef struct VectexNode{
	VectexNode data;
	EdgeNode *firstedge;
}VertexNode, AdjList[MAXVEX];

typedef struct{
	AdjList adjList;
	int numVertexes, numEdges;
}GraphAdjList;

void CreateALGraph (GraphAdjList *G){
	int i, j, k;
	EdgeNode *e;
	printf("���붥�����������: ");
	scanf("%d,%d",&G->numVertexes, &G->numEdges);
	for(i=0;i<G->numVertexes;++i){
		scanf(&G->adjList[i].data);
		g->adjList[i].firstedge = NULL;
	}
	for(k=0;k<G->numEdges;++k){
		printf("�����(vi,vj)�ϵĶ�����ţ�");
		scanf("%d,%d", &i, &j);
		e = (EdgeNode *)malloc(sizeof(EdgeNode));
		e->adjvex = j;
		e->next = G->adjList[i].firstedge;
		G->adjList[i].firstedge = e;
		
		e = (EdgeNode *)malloc(sizeof(EdgeNode));
		e->adjvex = i;
		e->next = G->adjList[j].firstedge;
		G->adjList[j].firstedge = e;
	}
}