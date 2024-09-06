class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        if (nums.size() <= 2) return nums.size(); // Se o vetor tem 2 ou menos elementos, retorna o tamanho

        int uniqueIndex = 0; // O primeiro índice é sempre válido
        int countUniques = 1; // Contador de números iguais consecutivos

        for (int i = 1; i < nums.size(); i++) {
            // Verifica se o número atual é o mesmo que o número no índice único
            if (nums[i] == nums[uniqueIndex]) {
                // Se já temos 2 ocorrências, não fazemos nada, só incrementamos o contador
                if (countUniques < 2) {
                    nums[++uniqueIndex] = nums[i];
                }
                countUniques++;
            } else {
                // Se o número é diferente, atualiza o índice e reseta o contador
                nums[++uniqueIndex] = nums[i];
                countUniques = 1;
            }
        }

        return uniqueIndex + 1; // Retorna o comprimento do vetor sem duplicatas
    }
};
