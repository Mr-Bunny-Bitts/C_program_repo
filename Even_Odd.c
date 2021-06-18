pipeline {
    agent any

    stages {
        stage('Compilation') {
            steps {
                echo 'Even_Odd'
                    int main()
                    {
                         int num=9;
    
                        if(num%2==0)
                             printf("%d is Even",num);
                        else
                               printf("%d is Odd",num);
                        return 0;
                    }
                
            }
        }
    }
}


