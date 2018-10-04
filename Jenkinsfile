@Library('shared-libs@master')_

node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
