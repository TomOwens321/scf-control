@Library('shared-libs@development')
import com.towens.*

node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sayHello.sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
