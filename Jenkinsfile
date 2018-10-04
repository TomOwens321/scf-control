@Library('shared-libs@development')
import com.towens.*

node('bbone') {
    stage('Checkout') {
        checkout scm
    }

    stage('Test') {
        sh = new sayHello()
        sh.sayHello('TomO')
        sh 'build/ardverify.sh'
    }
}
