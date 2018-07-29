/*
** 
** Theme : [Operations Information & Communications Wing] LINK Algorithm Contest
** Author : KTMO-Cell S/W Supporter(~'19), SukJoon Oh
** Environment : Ubuntu LTS 14.06.
** Change Log : First written '18.07.28.
** File Info : 
** Input: 
** Output: 
** 
** */

#define _DFS
#define _VECTOR

#ifdef _DFS

//#include <memory>
#include <vector>
#include <functional>

namespace _jcode {
	
	class DFS {
	private:
		/* Field */
		std::vector<std::vector<int>>& Graph_;			
		
		/* Member functions */
		bool doDfs() = delete;

	public:
		/* Constructor & Destructor */
		DFS(std::vector<std::vector<int>> argrGraph_) : Graph_(argrGraph_) {};
		virtual ~DFS();

		/* Interface */
			// Getter & Setter
		std::vector<std::vector<int>>& getGraph() const;
		void setGraph(std::vector<std::vector<int>>&); 
		
		/* Util */
		void doDfsBy(int, std::function<void(int)>);
		
		
		
	};
	
};

#endif