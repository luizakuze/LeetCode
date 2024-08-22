class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { // nums1 e nums2 já estão ordenados!
        // removendo elementos do vetor 1 (se tiver extra)
        for (int j = m; j != nums1.size(); j++) {
            nums1[j] = 0;
        }

        // colocando elementos no vetor 1
        for (int i = 0; i < n; i++) {
            nums1[m + i] = nums2[i];
        }

        // ordenamento
        for (int k = 0; k < (m+n-1); k++) {
            if (nums1[k] > nums1[k+1]) {
                int aux = nums1[k];
                nums1[k] = nums1[k+1];
                nums1[k+1] = aux;
            }
        }
    }
};

// Primeira tentativa...
 //class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { // nums1 e nums2 já estão ordenados!
//        // removendo elementos do vetor 1 (se tiver extra)
//        for (int j = m; j != nums1.size(); j++) {
//            nums1[j] = 0;
//        }
//
//        // colocando elementos no vetor 1
//        for (int i = 0; i < n; i++) {
//            nums1[m + i] = nums2[i];
//        }
//
//        // ordenamento
//        for (int k = 0; k < (m+n-1); k++) {
//            if (nums1[k] > nums1[k+1]) {
//                int aux = nums1[k];
//                nums1[k] = nums1[k+1];
//                nums1[k+1] = aux;
//            }
//        }
//    }
//};

// Uma outra solução...  
//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        // Índices para iterar através de nums1, nums2 e a posição para a inserção
//        int i = m - 1;
//        int j = n - 1;
//        int k = m + n - 1;
//
//        // Merging in reverse order
//        while (i >= 0 && j >= 0) {
//            if (nums1[i] > nums2[j]) {
//                nums1[k--] = nums1[i--];
//            } else {
//                nums1[k--] = nums2[j--];
//            }
//        }
//
//        // If there are remaining elements in nums2, copy them
//        while (j >= 0) {
//            nums1[k--] = nums2[j--];
//        }
//    }
//};
//
