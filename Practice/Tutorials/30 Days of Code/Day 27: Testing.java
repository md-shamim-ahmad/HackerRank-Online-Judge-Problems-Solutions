static class TestDataEmptyArray {
        public static int[] get_array() {
            // complete this function
            return new int[0];
        }
    }

    static class TestDataUniqueValues {
        private static int arr[] = {3, 4, 5};
        private static int minIndex = 0;
        public static int[] get_array() {
            // complete this function
            return arr;
        }

        public static int get_expected_result() {
            // complete this function
            return minIndex;
        }
    }

    static class TestDataExactlyTwoDifferentMinimums {
        private static int arr[] = {3, 4, 5, 3};
        private static int minIndex = 0;
        public static int[] get_array() {
            // complete this function
            return arr;
        }

        public static int get_expected_result() {
            // complete this function
            return minIndex;
        }
    }
