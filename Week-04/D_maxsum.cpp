int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
                if (k > n) return 0;

                long long int current_sum = 0;

                for (int i = 0; i < k; ++i) {
                    current_sum += arr[i];
                }

                long long int max_sum = current_sum;

                for (int i = k; i < n; ++i) {
                    current_sum += arr[i] - arr[i - k];
                    max_sum = std::max(max_sum, current_sum);
                }

                return max_sum;
        
    }
