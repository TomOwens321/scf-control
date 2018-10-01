@Library('https://github.com/TomOwens321/sharedlibs@development')_
node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sh 'build/ardverify.sh'
    }
}
