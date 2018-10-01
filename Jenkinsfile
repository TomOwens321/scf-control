@Library('https://github.com/TomOwens321/sharedlibs.git')_
node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sh 'build/ardverify.sh'
    }
}
