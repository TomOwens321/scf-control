node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sh 'build/ardtest.sh'
    }
}
