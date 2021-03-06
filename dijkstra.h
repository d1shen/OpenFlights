#pragma once 

#include <stdexcept>
#include <unordered_map>
#include <list>
#include <cmath>
#include <unordered_map>
#include <stack>

#include "graph.h"
#include "airport.h"

typedef std::pair<int,int> adj;

class dijkstra {
  
public:
  dijkstra(const Graph& graph);
  
  std::vector<Airport> find_shortest(const std::string& arrival, const std::string& departure);
    
private:
  
  std::vector<Airport> get_shortest(const std::vector<adj>& distance_, int arrival_idx, int departure_idx);
  
  Graph kGraph_;
};