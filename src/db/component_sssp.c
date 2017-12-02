#include "../../include/graph.h"


/* Place the code for your Dijkstra implementation in this file */


int
component_sssp(
        component_t c,
        vertexid_t v1,
        vertexid_t v2,
        int *n,
        int *total_weight,
        vertexid_t **path)
{
	
	/*
	 * Figure out which attribute in the component edges schema you will
	 * use for your weight function
	 *
	 *
	 * c.se contains the schema
	 * - this could be used to find the first int
	 *
	 * attrlist points to attributes (this is in schema.h)
	 *
	 * we want to go through c.se and check it's base type for INT
	 * c->se->attrlist->bt
	 *
	 */

	/*
	 * Sudo code for algorithm:
	 *
	 * Create vertex set Q
	 *
	 * for each vertex v in Graph:		// Initilization
	 * 		dist[v] <- Infinity			// Unknown distance from source to v
	 * 		prev[v] <- Undefined 		// Previous node in optimal path from source
	 *		add v to Q					// All nodes initially in Q (unvisited nodes)
	 *
	 *	dist[source] <- 0				// Distance from source to source
	 *
	 *	while Q is not empty:
	 *		u <- vertex in Q with min dist[u]	// Nodes with the least distance will be selected first
	 *
	 *		remove u from Q
	 *
	 *		for each neighbor v of u:		// Where v is still in Q
	 *			alt <- dist[u] + length(u,v)
	 *			if alt < dist[v]:			// A shorter path to v has been found
	 *				dist[v] <- alt
	 *				prev[v] <- u
	 *	return dist[], prev[]
	 *
	 */

	/*
	 * first create a set containing vertices for the shortest path from the source vertex
	 * Initially this starts off containing only v1
	 *
	 *
	 */


	/*
	 * Execute Dijkstra on the attribute you found for the specified
	 * component
	 */



	/* Change this as needed */
	return (-1);
}
