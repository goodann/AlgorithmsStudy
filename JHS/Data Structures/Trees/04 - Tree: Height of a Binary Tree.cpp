
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/

    int height(Node* root) {
        // Write your code here.
        int max_depth;                                  //최대 depth값을 저장할 변수
        
        if(root != NULL){                               //root노드가 존재할 경우
            max_depth = 0;                              //자식노드가 없을 경우 0을 리턴. 있으면 큰 쪽 +1
            
            int left_depth = height(root->left) + 1;    //left child의 리턴값 + 1
            int right_depth = height(root->right) + 1;  //right child의 리턴값 + 1
            
            if(left_depth > right_depth){               //left와 right중 큰 쪽을 저장한다
                max_depth = left_depth;
            }else{
                max_depth = right_depth;
            }
        }else{                                          //root노드가 없을 경우
            max_depth = -1;                             //-1을 리턴
        }
        
        return max_depth;                               //반환
        
        //요약 : 모든 잎 노드에서 0을 반환하고 양쪽 차일드의 반환값 중 큰 쪽의 값에 1을 더해서 반환한다.
    }
  
