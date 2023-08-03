// baekjoon 1713

#include<iostream>
#include<algorithm>

using namespace std;
    
int main(){
    int n; // 사진틀 수
    cin >> n;
    
    int k; // 전체 학생 추천 수
    cin >> k;
    
    int student[20]; // 사진틀의 학생 번호
    int recommand[1000]; // 사진틀의 누적 추천 수
    int order[n]; // 사진틀의 학생 추천 받은 순서
    
    int index = 0;
    int input = 0;
    
    for(int i = 0; i < k; i++){
        
        cin >> input; // 추천 사진 입력
        index = 0;
        
        for(int j = 0; j < n; j++){
            // 입력 받은 사진이 사진틀에 없거나 이미 게시되어 있으면
            if((student[j] == 0) || (student[j] == input)){
                index = j; //현재 사진의 인덱스로 수정
                break;
            }
            // 새로운 입력 값이 들어왔을 때 사진틀이 비어있지 않으면
            // 추천 수가 적거나, 추천 수가 같을 때 게시된지 오래되었다면
            if ((recommand[index] > recommand[j]) || (recommand[index] == recommand[j] && order[index] > order[j])) {
                index = j; // 현재 사진의 인덱스로 수정
            }
        }
        // 입력 받은 사진이 게시되지 않은 상태면 사진틀에 게시
        if(student[index] != input){
            student[index] = input; //
            recommand[index] = 0; // 추천 수 초기화
            order[index] = i; // 게시된 사진의 순서 저장
        }
        recommand[index]++; // 게시된 사진의 추천 수 증가
    }
    
    sort(student, student + n); // 오름차순으로 정렬

    for(int j = 0; j < n; j++){
        if(student[j] != 0){
            cout << student[j] << ' ';
        }
    }
}
    

